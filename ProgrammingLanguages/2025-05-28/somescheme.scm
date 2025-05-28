;; Where we're headed: let with a recursive
;; call for a function created inside the let

(let ((a 3) (b 5))
  (+ a b))

;; (let ((a 3) (b (+ a 1)))
;;   (+ a b))

;; Two ways of fixing
(let ((a 3))
  (let ((b (+ a 1)))
    (+ a b)))
