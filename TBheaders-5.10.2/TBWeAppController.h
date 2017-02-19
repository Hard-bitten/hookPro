//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class HUDActivityView, NSArray, NSDictionary, NSLock, NSMutableArray, NSString, TBModelStatusHandler, TBModelStatusInfo, TBWeAppEngine, WeAppActionManager, WeAppPageItem;

@interface TBWeAppController : TBViewController
{
    NSString *_apiName;	// 16 = 0x10
    NSString *_page;	// 24 = 0x18
    NSString *_urlString;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
    NSDictionary *_params;	// 48 = 0x30
    WeAppPageItem *_pageItem;	// 56 = 0x38
    NSMutableArray *_imageViews;	// 64 = 0x40
    NSLock *_menusArrayLock;	// 72 = 0x48
    NSArray *_moreMenuActions;	// 80 = 0x50
    WeAppActionManager *_caActionMgr;	// 88 = 0x58
    TBWeAppEngine *_engine;	// 96 = 0x60
    HUDActivityView *_pageLoadingIndicator;	// 104 = 0x68
    TBModelStatusInfo *_info;	// 112 = 0x70
    TBModelStatusHandler *_handler;	// 120 = 0x78
}

+ (void)initialize;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TBModelStatusInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) HUDActivityView *pageLoadingIndicator; // @synthesize pageLoadingIndicator=_pageLoadingIndicator;
@property(retain, nonatomic) TBWeAppEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) WeAppActionManager *caActionMgr; // @synthesize caActionMgr=_caActionMgr;
@property(retain, nonatomic) NSArray *moreMenuActions; // @synthesize moreMenuActions=_moreMenuActions;
@property(retain, nonatomic) NSLock *menusArrayLock; // @synthesize menusArrayLock=_menusArrayLock;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) __weak WeAppPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)dataForUserTrack;
- (void)menuItemClicked:(id)arg1;
- (void)addMenu:(id)arg1;
- (void)addMoreMenus:(id)arg1;
- (void)setupNaviMenus;
- (void)setupNavigationTitle;
- (void)setupNavigtionBar;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)getPage;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithApiName:(id)arg1 params:(id)arg2 version:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
