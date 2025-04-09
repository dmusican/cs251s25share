;;; typical eager evaluation
(define gen-list
  (lambda (start stop)
    (if (equal? start stop)
        (list start)
        (cons start (gen-list (+ start 1) stop)))))

;;; lazy evaluation
;;; instead of generating whole list we will instea
;;; generate just a single Scheme pair (a cons cell)
;;; where the car is the first number
;;; and the cdr is a function (that we when we run it
;;; we get the next cell in the lazy list)

(define gen-lazy-list
  (lambda (start stop)
    (if (> start stop)
        '()
        (cons start
              (lambda ()
                (gen-lazy-list (+ start 1) stop))))))
