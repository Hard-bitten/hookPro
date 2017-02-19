//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBQGRequestModelDelegate-Protocol.h"

@class NSDictionary, NSString, TBHUDActivityView, TBModelStatusHandler, TBQGResultInfoView, TBQGService;

@interface TBQGBaseViewController : TBViewController <TBQGRequestModelDelegate>
{
    _Bool _hiddenShowActivityLoadingView;	// 10 = 0xa
    _Bool _needsRefresh;	// 11 = 0xb
    TBHUDActivityView *_activityLoadingView;	// 16 = 0x10
    TBQGResultInfoView *_resultInfoView;	// 24 = 0x18
    TBModelStatusHandler *_statusHandler;	// 32 = 0x20
    TBQGService *_service;	// 40 = 0x28
    NSDictionary *_extParams;	// 48 = 0x30
}

@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) _Bool hiddenShowActivityLoadingView; // @synthesize hiddenShowActivityLoadingView=_hiddenShowActivityLoadingView;
@property(retain, nonatomic) TBQGService *service; // @synthesize service=_service;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) TBQGResultInfoView *resultInfoView; // @synthesize resultInfoView=_resultInfoView;
@property(retain, nonatomic) TBHUDActivityView *activityLoadingView; // @synthesize activityLoadingView=_activityLoadingView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)showViewForErrorRule:(id)arg1 inView:(id)arg2 statusHandler:(id)arg3;
- (void)showViewForErrorRule:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3 statusHandler:(id)arg4;
- (void)showViewForError:(id)arg1 inView:(id)arg2 statusHandler:(id)arg3;
- (void)showViewForError:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3 statusHandler:(id)arg4;
- (void)refreshData;
- (void)reloadData;
- (void)dataDidFailLoad:(id)arg1;
- (void)dataDidSuccessLoad:(id)arg1;
- (void)dataDidStartLoad;
- (void)modelDidFailLoad:(id)arg1;
- (void)modelDidSuccessLoad:(id)arg1;
- (void)modelDidStartLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
