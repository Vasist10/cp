data NestedList a = Elem a | List [NestedList a] deriving Show
instance Functor NestedList where
    fmap f (Elem x) = Elem (f x)
    fmap f (List xs) = List (map (fmap f) xs)
main :: IO ()
main = print (fmap (+1) (List [Elem 1, List [Elem 2, Elem 3]]))


