//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseBubbleChatView.h"

#import "WebContentViewDelegate-Protocol.h"

@class NSString, WebBubbleViewModel, WebViewContentView;

@interface PipeWebBubbleView : BaseBubbleChatView <WebContentViewDelegate>
{
    NSString *_content;	// 8 = 0x8
    WebViewContentView *_contentView;	// 16 = 0x10
    NSString *_historyContent;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *historyContent; // @synthesize historyContent=_historyContent;
@property(retain, nonatomic) WebViewContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)webContentView:(id)arg1 heightChanged:(double)arg2;
- (void)setOpenUrlBlock:(CDUnknownBlockType)arg1;
- (void)updateBubbleView;
- (struct CGSize)getBubbleViewSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) WebBubbleViewModel *viewModel;

@end
