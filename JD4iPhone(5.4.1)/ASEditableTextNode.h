//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "NSLayoutManagerDelegate.h"
#import "UITextViewDelegate.h"

@class ASTextKitComponents, ASTextNodeWordKerner, NSAttributedString, NSDictionary, NSString, UITextInputMode, UITextView;

@interface ASEditableTextNode : ASDisplayNode <UITextViewDelegate, NSLayoutManagerDelegate>
{
    NSDictionary *_typingAttributes;
    id <ASEditableTextNodeDelegate> _delegate;
    _Bool _delegateDidUpdateEnqueued;
    struct RecursiveMutex _textKitLock;
    ASTextKitComponents *_textKitComponents;
    ASTextKitComponents *_placeholderTextKitComponents;
    ASTextNodeWordKerner *_wordKerner;
    _Bool _displayingPlaceholder;
    _Bool _isPreservingSelection;
    _Bool _selectionChangedForEditedText;
    struct _NSRange _previousSelectedRange;
    _Bool _scrollEnabled;
    long long _returnKeyType;
    struct UIEdgeInsets _textContainerInset;
}

@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) struct UIEdgeInsets textContainerInset; // @synthesize textContainerInset=_textContainerInset;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <ASEditableTextNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_delegateDidFinishEditing;
- (void)_delegateDidUpdateText;
- (void)_delegateDidChangeSelectionFromSelectedRange:(struct _NSRange)arg1 toSelectedRange:(struct _NSRange)arg2;
- (_Bool)_delegateShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)_delegateDidBeginEditing;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
@property(readonly, nonatomic) UITextInputMode *textInputMode; // @dynamic textInputMode;
- (void)_layoutTextView;
- (void)_updateDisplayingPlaceholder;
@property(copy, nonatomic) NSAttributedString *attributedText; // @dynamic attributedText;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholderText; // @dynamic attributedPlaceholderText;
- (_Bool)isDisplayingPlaceholder;
@property(nonatomic) struct _NSRange selectedRange; // @dynamic selectedRange;
@property(retain, nonatomic) NSDictionary *typingAttributes; // @dynamic typingAttributes;
@property(readonly, nonatomic) UITextView *textView;
- (void)setLayerBacked:(_Bool)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layout;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)didLoad;
- (void)dealloc;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithTextKitComponents:(id)arg1 placeholderTextKitComponents:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

