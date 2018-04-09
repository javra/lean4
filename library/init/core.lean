/-
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura

notation, basic datatypes and type classes
-/
prelude

notation `Prop` := Sort 0
notation f ` $ `:1 a:0 := f a

/- Logical operations and relations -/

reserve prefix `¬`:40
reserve prefix `~`:40
reserve infixr ` ∧ `:35
reserve infixr ` /\ `:35
reserve infixr ` \/ `:30
reserve infixr ` ∨ `:30
reserve infix ` <-> `:20
reserve infix ` ↔ `:20
reserve infix ` = `:50
reserve infix ` == `:50
reserve infix ` ≠ `:50
reserve infix ` ≈ `:50
reserve infix ` ~ `:50
reserve infix ` ≡ `:50
reserve infixl ` ⬝ `:75
reserve infixr ` ▸ `:75
reserve infixr ` ▹ `:75

/- types and type constructors -/

reserve infixr ` ⊕ `:30
reserve infixr ` × `:35

/- arithmetic operations -/

reserve infixl ` + `:65
reserve infixl ` - `:65
reserve infixl ` * `:70
reserve infixl ` / `:70
reserve infixl ` % `:70
reserve prefix `-`:100
reserve infixr ` ^ `:80

reserve infixr ` ∘ `:90                 -- input with \comp

reserve infix ` <= `:50
reserve infix ` ≤ `:50
reserve infix ` < `:50
reserve infix ` >= `:50
reserve infix ` ≥ `:50
reserve infix ` > `:50

/- boolean operations -/

reserve infixl ` && `:70
reserve infixl ` || `:65

/- set operations -/

reserve infix ` ∈ `:50
reserve infix ` ∉ `:50
reserve infixl ` ∩ `:70
reserve infixl ` ∪ `:65
reserve infix ` ⊆ `:50
reserve infix ` ⊇ `:50
reserve infix ` ⊂ `:50
reserve infix ` ⊃ `:50
reserve infix ` \ `:70

/- other symbols -/

reserve infix ` ∣ `:50
reserve infixl ` ++ `:65
reserve infixr ` :: `:67
reserve infixl `; `:1

universes u v w

/-
The kernel definitional equality test (t =?= s) has special support for id_delta applications.
It implements the following rules

   1)   (id_delta t) =?= t
   2)   t =?= (id_delta t)
   3)   (id_delta t) =?= s  IF (unfold_of t) =?= s
   4)   t =?= id_delta s    IF t =?= (unfold_of s)

This is mechanism for controlling the delta reduction (aka unfolding) used in the kernel.

We use id_delta applications to address performance problems when type checking
lemmas generated by the equation compiler.
-/
@[inline] def id_delta {α : Sort u} (a : α) : α :=
a

/-- Gadget for optional parameter support. -/
@[reducible] def opt_param (α : Sort u) (default : α) : Sort u :=
α

/-- Gadget for marking output parameters in type classes. -/
@[reducible] def out_param (α : Sort u) : Sort u := α

/-- Auxiliary declaration used to implement the notation (a : α) -/
@[reducible] def typed_expr (α : Type u) (a : α) : α := a

/-
  id_rhs is an auxiliary declaration used in the equation compiler to address performance
  issues when proving equational lemmas. The equation compiler uses it as a marker.
-/
abbreviation id_rhs (α : Sort u) (a : α) : α := a

inductive punit : Sort u
| star : punit

/-- An abbreviation for `punit.{0}`, its most common instantiation.
    This type should be preferred over `punit` where possible to avoid
    unnecessary universe parameters. -/
abbreviation unit : Type := punit

@[pattern] abbreviation unit.star : unit := punit.star

/--
Gadget for defining thunks, thunk parameters have special treatment.
Example: given
      def f (s : string) (t : thunk nat) : nat
an application
     f "hello" 10
 is converted into
     f "hello" (λ _, 10)
-/
@[reducible] def thunk (α : Type u) : Type u :=
unit → α

inductive true : Prop
| intro : true

inductive false : Prop

inductive empty : Type

def not (a : Prop) := a → false
prefix `¬` := not

inductive eq {α : Sort u} (a : α) : α → Prop
| refl : eq a

/-
Initialize the quotient module, which effectively adds the following definitions:

constant quot {α : Sort u} (r : α → α → Prop) : Sort u

constant quot.mk {α : Sort u} (r : α → α → Prop) (a : α) : quot r

constant quot.lift {α : Sort u} {r : α → α → Prop} {β : Sort v} (f : α → β) :
  (∀ a b : α, r a b → eq (f a) (f b)) → quot r → β

constant quot.ind {α : Sort u} {r : α → α → Prop} {β : quot r → Prop} :
  (∀ a : α, β (quot.mk r a)) → ∀ q : quot r, β q
-/
init_quotient

inductive heq {α : Sort u} (a : α) : Π {β : Sort u}, β → Prop
| refl : heq a

structure prod (α : Type u) (β : Type v) :=
(fst : α) (snd : β)

/-- Similar to `prod`, but α and β can be propositions.
   We use this type internally to automatically generate the brec_on recursor. -/
structure pprod (α : Sort u) (β : Sort v) :=
(fst : α) (snd : β)

structure and (a b : Prop) : Prop :=
intro :: (left : a) (right : b)

def and.elim_left {a b : Prop} (h : and a b) : a := h.1

def and.elim_right {a b : Prop} (h : and a b) : b := h.2

/- eq basic support -/

infix = := eq

attribute [refl] eq.refl

@[pattern] def rfl {α : Sort u} {a : α} : a = a := eq.refl a

@[elab_as_eliminator, subst]
lemma eq.subst {α : Sort u} {P : α → Prop} {a b : α} (h₁ : a = b) (h₂ : P a) : P b :=
eq.rec h₂ h₁

notation h1 ▸ h2 := eq.subst h1 h2

@[trans] lemma eq.trans {α : Sort u} {a b c : α} (h₁ : a = b) (h₂ : b = c) : a = c :=
h₂ ▸ h₁

@[symm] lemma eq.symm {α : Sort u} {a b : α} (h : a = b) : b = a :=
h ▸ rfl

infix == := heq

@[pattern] def heq.rfl {α : Sort u} {a : α} : a == a := heq.refl a

lemma eq_of_heq {α : Sort u} {a a' : α} (h : a == a') : a = a' :=
have ∀ (α' : Sort u) (a' : α') (h₁ : @heq α a α' a') (h₂ : α = α'), (eq.rec_on h₂ a : α') = a', from
  λ (α' : Sort u) (a' : α') (h₁ : @heq α a α' a'), heq.rec_on h₁ (λ h₂ : α = α, rfl),
show (eq.rec_on (eq.refl α) a : α) = a', from
  this α a' h (eq.refl α)

/- The following four lemmas could not be automatically generated when the
   structures were declared, so we prove them manually here. -/
lemma prod.mk.inj {α : Type u} {β : Type v} {x₁ : α} {y₁ : β} {x₂ : α} {y₂ : β}
  : (x₁, y₁) = (x₂, y₂) → and (x₁ = x₂) (y₁ = y₂) :=
λ h, prod.no_confusion h (λ h₁ h₂, ⟨h₁, h₂⟩)

lemma prod.mk.inj_arrow {α : Type u} {β : Type v} {x₁ : α} {y₁ : β} {x₂ : α} {y₂ : β}
  : (x₁, y₁) = (x₂, y₂) → Π ⦃P : Sort w⦄, (x₁ = x₂ → y₁ = y₂ → P) → P :=
λ h₁ _ h₂, prod.no_confusion h₁ h₂

lemma pprod.mk.inj {α : Sort u} {β : Sort v} {x₁ : α} {y₁ : β} {x₂ : α} {y₂ : β}
  : pprod.mk x₁ y₁ = pprod.mk x₂ y₂ → and (x₁ = x₂) (y₁ = y₂) :=
λ h, pprod.no_confusion h (λ h₁ h₂, ⟨h₁, h₂⟩)

lemma pprod.mk.inj_arrow {α : Type u} {β : Type v} {x₁ : α} {y₁ : β} {x₂ : α} {y₂ : β}
  : (x₁, y₁) = (x₂, y₂) → Π ⦃P : Sort w⦄, (x₁ = x₂ → y₁ = y₂ → P) → P :=
λ h₁ _ h₂, prod.no_confusion h₁ h₂

inductive sum (α : Type u) (β : Type v)
| inl {} (val : α) : sum
| inr {} (val : β) : sum

inductive psum (α : Sort u) (β : Sort v)
| inl {} (val : α) : psum
| inr {} (val : β) : psum

inductive or (a b : Prop) : Prop
| inl {} (h : a) : or
| inr {} (h : b) : or

def or.intro_left {a : Prop} (b : Prop) (ha : a) : or a b :=
or.inl ha

def or.intro_right (a : Prop) {b : Prop} (hb : b) : or a b :=
or.inr hb

structure sigma {α : Type u} (β : α → Type v) :=
mk :: (fst : α) (snd : β fst)

structure psigma {α : Sort u} (β : α → Sort v) :=
mk :: (fst : α) (snd : β fst)

inductive bool : Type
| ff : bool
| tt : bool

/- Remark: subtype must take a Sort instead of Type because of the axiom strong_indefinite_description. -/
structure subtype {α : Sort u} (p : α → Prop) :=
(val : α) (property : p val)

attribute [pp_using_anonymous_constructor] sigma psigma subtype pprod and

class inductive decidable (p : Prop)
| is_false (h : ¬p) : decidable
| is_true  (h : p) : decidable

@[reducible]
def decidable_pred {α : Sort u} (r : α → Prop) :=
Π (a : α), decidable (r a)

@[reducible]
def decidable_rel {α : Sort u} (r : α → α → Prop) :=
Π (a b : α), decidable (r a b)

@[reducible]
def decidable_eq (α : Sort u) :=
decidable_rel (@eq α)

inductive option (α : Type u)
| none {} : option
| some (val : α) : option

export option (none some)
export bool (ff tt)

inductive list (T : Type u)
| nil {} : list
| cons (hd : T) (tl : list) : list

notation h :: t  := list.cons h t
notation `[` l:(foldr `, ` (h t, list.cons h t) list.nil `]`) := l

inductive nat
| zero : nat
| succ (n : nat) : nat

structure unification_constraint :=
{α : Type u} (lhs : α) (rhs : α)

infix ` ≟ `:50   := unification_constraint.mk
infix ` =?= `:50 := unification_constraint.mk

structure unification_hint :=
(pattern : unification_constraint)
(constraints : list unification_constraint)

/- Declare builtin and reserved notation -/

class has_zero     (α : Type u) := (zero : α)
class has_one      (α : Type u) := (one : α)
class has_add      (α : Type u) := (add : α → α → α)
class has_mul      (α : Type u) := (mul : α → α → α)
class has_inv      (α : Type u) := (inv : α → α)
class has_neg      (α : Type u) := (neg : α → α)
class has_sub      (α : Type u) := (sub : α → α → α)
class has_div      (α : Type u) := (div : α → α → α)
class has_dvd      (α : Type u) := (dvd : α → α → Prop)
class has_mod      (α : Type u) := (mod : α → α → α)
class has_le       (α : Type u) := (le : α → α → Prop)
class has_lt       (α : Type u) := (lt : α → α → Prop)
class has_append   (α : Type u) := (append : α → α → α)
class has_andthen  (α : Type u) (β : Type v) (σ : out_param $ Type w) := (andthen : α → β → σ)
class has_union    (α : Type u) := (union : α → α → α)
class has_inter    (α : Type u) := (inter : α → α → α)
class has_sdiff    (α : Type u) := (sdiff : α → α → α)
class has_equiv    (α : Sort u) := (equiv : α → α → Prop)
class has_subset   (α : Type u) := (subset : α → α → Prop)
class has_ssubset  (α : Type u) := (ssubset : α → α → Prop)
/- Type classes has_emptyc and has_insert are
   used to implement polymorphic notation for collections.
   Example: {a, b, c}. -/
class has_emptyc   (α : Type u) := (emptyc : α)
class has_insert   (α : out_param $ Type u) (γ : Type v) := (insert : α → γ → γ)
/- Type class used to implement the notation { a ∈ c | p a } -/
class has_sep (α : out_param $ Type u) (γ : Type v) :=
(sep : (α → Prop) → γ → γ)
/- Type class for set-like membership -/
class has_mem (α : out_param $ Type u) (γ : Type v) := (mem : α → γ → Prop)

class has_pow (α : Type u) (β : Type v) :=
(pow : α → β → α)

export has_andthen (andthen)
export has_pow (pow)

infix ∈        := has_mem.mem
notation a ∉ s := ¬ has_mem.mem a s
infix +        := has_add.add
infix *        := has_mul.mul
infix -        := has_sub.sub
infix /        := has_div.div
infix ∣        := has_dvd.dvd
infix %        := has_mod.mod
prefix -       := has_neg.neg
infix <=       := has_le.le
infix ≤        := has_le.le
infix <        := has_lt.lt
infix ++       := has_append.append
infix ;        := andthen
notation `∅`   := has_emptyc.emptyc _
infix ∪        := has_union.union
infix ∩        := has_inter.inter
infix ⊆        := has_subset.subset
infix ⊂        := has_ssubset.ssubset
infix \        := has_sdiff.sdiff
infix ≈        := has_equiv.equiv
infixr ^       := has_pow.pow

export has_append (append)

@[reducible] def ge {α : Type u} [has_le α] (a b : α) : Prop := has_le.le b a
@[reducible] def gt {α : Type u} [has_lt α] (a b : α) : Prop := has_lt.lt b a

infix >=       := ge
infix ≥        := ge
infix >        := gt

@[reducible] def superset {α : Type u} [has_subset α] (a b : α) : Prop := has_subset.subset b a
@[reducible] def ssuperset {α : Type u} [has_ssubset α] (a b : α) : Prop := has_ssubset.ssubset b a

infix ⊇        := superset
infix ⊃        := ssuperset

def bit0 {α : Type u} [s  : has_add α] (a  : α)                 : α := a + a
def bit1 {α : Type u} [s₁ : has_one α] [s₂ : has_add α] (a : α) : α := (bit0 a) + 1

attribute [pattern] has_zero.zero has_one.one bit0 bit1 has_add.add has_neg.neg

def insert {α : Type u} {γ : Type v} [has_insert α γ] : α → γ → γ :=
has_insert.insert

/- The empty collection -/
def singleton {α : Type u} {γ : Type v} [has_emptyc γ] [has_insert α γ] (a : α) : γ :=
has_insert.insert a ∅

/- nat basic instances -/

namespace nat
  protected def add : nat → nat → nat
  | a  zero     := a
  | a  (succ b) := succ (add a b)

  /- We mark the following definitions as pattern to make sure they can be used in recursive equations,
     and reduced by the equation compiler. -/
  attribute [pattern] nat.add nat.add._main
end nat

instance : has_zero nat := ⟨nat.zero⟩

instance : has_one nat := ⟨nat.succ (nat.zero)⟩

instance : has_add nat := ⟨nat.add⟩

def std.priority.default : nat := 1000
def std.priority.max     : nat := 0xFFFFFFFF

namespace nat
  protected def prio := std.priority.default + 100
end nat

/-
  Global declarations of right binding strength

  If a module reassigns these, it will be incompatible with other modules that adhere to these
  conventions.

  When hovering over a symbol, use "C-c C-k" to see how to input it.
-/
def std.prec.max   : nat := 1024 -- the strength of application, identifiers, (, [, etc.
def std.prec.arrow : nat := 25

/-
The next def is "max + 10". It can be used e.g. for postfix operations that should
be stronger than application.
-/

def std.prec.max_plus : nat := std.prec.max + 10

reserve postfix `⁻¹`:std.prec.max_plus  -- input with \sy or \-1 or \inv
postfix ⁻¹     := has_inv.inv

notation α × β := prod α β
-- notation for n-ary tuples

/- sizeof -/

class has_sizeof (α : Sort u) :=
(sizeof : α → nat)

def sizeof {α : Sort u} [s : has_sizeof α] : α → nat :=
has_sizeof.sizeof

/-
Declare sizeof instances and lemmas for types declared before has_sizeof.
From now on, the inductive compiler will automatically generate sizeof instances and lemmas.
-/

/- Every type `α` has a default has_sizeof instance that just returns 0 for every element of `α` -/
protected def default.sizeof (α : Sort u) : α → nat
| a := 0

instance default_has_sizeof (α : Sort u) : has_sizeof α :=
⟨default.sizeof α⟩

protected def nat.sizeof : nat → nat
| n := n

instance : has_sizeof nat :=
⟨nat.sizeof⟩

protected def prod.sizeof {α : Type u} {β : Type v} [has_sizeof α] [has_sizeof β] : (prod α β) → nat
| ⟨a, b⟩ := 1 + sizeof a + sizeof b

instance (α : Type u) (β : Type v) [has_sizeof α] [has_sizeof β] : has_sizeof (prod α β) :=
⟨prod.sizeof⟩

protected def sum.sizeof {α : Type u} {β : Type v} [has_sizeof α] [has_sizeof β] : (sum α β) → nat
| (sum.inl a) := 1 + sizeof a
| (sum.inr b) := 1 + sizeof b

instance (α : Type u) (β : Type v) [has_sizeof α] [has_sizeof β] : has_sizeof (sum α β) :=
⟨sum.sizeof⟩

protected def psum.sizeof {α : Type u} {β : Type v} [has_sizeof α] [has_sizeof β] : (psum α β) → nat
| (psum.inl a) := 1 + sizeof a
| (psum.inr b) := 1 + sizeof b

instance (α : Type u) (β : Type v) [has_sizeof α] [has_sizeof β] : has_sizeof (psum α β) :=
⟨psum.sizeof⟩

protected def sigma.sizeof {α : Type u} {β : α → Type v} [has_sizeof α] [∀ a, has_sizeof (β a)] : sigma β → nat
| ⟨a, b⟩ := 1 + sizeof a + sizeof b

instance (α : Type u) (β : α → Type v) [has_sizeof α] [∀ a, has_sizeof (β a)] : has_sizeof (sigma β) :=
⟨sigma.sizeof⟩

protected def psigma.sizeof {α : Type u} {β : α → Type v} [has_sizeof α] [∀ a, has_sizeof (β a)] : psigma β → nat
| ⟨a, b⟩ := 1 + sizeof a + sizeof b

instance (α : Type u) (β : α → Type v) [has_sizeof α] [∀ a, has_sizeof (β a)] : has_sizeof (psigma β) :=
⟨psigma.sizeof⟩

protected def punit.sizeof : punit → nat
| u := 1

instance : has_sizeof punit := ⟨punit.sizeof⟩

protected def bool.sizeof : bool → nat
| b := 1

instance : has_sizeof bool := ⟨bool.sizeof⟩

protected def option.sizeof {α : Type u} [has_sizeof α] : option α → nat
| none     := 1
| (some a) := 1 + sizeof a

instance (α : Type u) [has_sizeof α] : has_sizeof (option α) :=
⟨option.sizeof⟩

protected def list.sizeof {α : Type u} [has_sizeof α] : list α → nat
| list.nil        := 1
| (list.cons a l) := 1 + sizeof a + list.sizeof l

instance (α : Type u) [has_sizeof α] : has_sizeof (list α) :=
⟨list.sizeof⟩

protected def subtype.sizeof {α : Type u} [has_sizeof α] {p : α → Prop} : subtype p → nat
| ⟨a, _⟩ := sizeof a

instance {α : Type u} [has_sizeof α] (p : α → Prop) : has_sizeof (subtype p) :=
⟨subtype.sizeof⟩

lemma nat_add_zero (n : nat) : n + 0 = n := rfl

/- Combinator calculus -/
namespace combinator
universes u₁ u₂ u₃
def I {α : Type u₁} (a : α) := a
def K {α : Type u₁} {β : Type u₂} (a : α) (b : β) := a
def S {α : Type u₁} {β : Type u₂} {γ : Type u₃} (x : α → β → γ) (y : α → β) (z : α) := x z (y z)
end combinator

/-- Auxiliary datatype for #[ ... ] notation.
    #[1, 2, 3, 4] is notation for

    bin_tree.node
      (bin_tree.node (bin_tree.leaf 1) (bin_tree.leaf 2))
      (bin_tree.node (bin_tree.leaf 3) (bin_tree.leaf 4))

    We use this notation to input long sequences without exhausting the system stack space.
    Later, we define a coercion from `bin_tree` into `list`.
-/
inductive bin_tree (α : Type u)
| empty {}       : bin_tree
| leaf (val : α) : bin_tree
| node (left right : bin_tree) : bin_tree

attribute [elab_simple] bin_tree.node bin_tree.leaf

/- Basic unification hints -/
@[unify] def add_succ_defeq_succ_add_hint (x y z : nat) : unification_hint :=
{ pattern     := x + nat.succ y ≟ nat.succ z,
  constraints := [z ≟ x + y] }

/-- Like `by apply_instance`, but not dependent on the tactic framework. -/
@[reducible] def infer_instance {α : Type u} [i : α] : α := i
