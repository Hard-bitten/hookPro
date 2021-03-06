//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YXVideoSuperPlayerDelegate.h"

@class AVAsset, CALayer, NSArray, NSObject<OS_dispatch_queue>, NSString, YXVideoEditor, YXVideoEffect, YXVideoExport, YXVideoSuperPlayer;

@interface YXVideoKitEngine : NSObject <YXVideoSuperPlayerDelegate>
{
    _Bool videoUseEffect;
    _Bool needPlayerReload;
    _Bool beenLoadAndPlay;
    _Bool authorityDisable;
    _Bool logoISLegal;
    _Bool donotValidate;
    _Bool hasTransition;
    _Bool _isPlaying;
    _Bool _isFliped;
    _Bool _useLowBitRate;
    _Bool _donotFadeOut;
    YXVideoEditor *_editor;
    NSString *_currentMusicPath;
    id <YXVideoKitEnginePlayerDelegate> _delegate;
    CALayer *_animatedLayer;
    NSString *_userAppointBundleName;
    double _soundMixIntensity;
    NSString *_syncFileForCompostion;
    YXVideoSuperPlayer *_yxPlayer;
    YXVideoEffect *_videoEffect;
    NSArray *_effectArray;
    NSArray *_originalAssets;
    YXVideoExport *_videoExport;
    NSObject<OS_dispatch_queue> *_playerAsyncQueue;
    NSArray *_mutipleFrameConfig;
}

+ (void)dealWithImportURL:(id)arg1 outputPath:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)dealWithPickerMediaInfo:(id)arg1 outputPath:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)exportCompatibleVideoFrom:(id)arg1 to:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSArray *mutipleFrameConfig; // @synthesize mutipleFrameConfig=_mutipleFrameConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playerAsyncQueue; // @synthesize playerAsyncQueue=_playerAsyncQueue;
@property(retain, nonatomic) YXVideoExport *videoExport; // @synthesize videoExport=_videoExport;
@property(retain, nonatomic) NSArray *originalAssets; // @synthesize originalAssets=_originalAssets;
@property(retain, nonatomic) NSArray *effectArray; // @synthesize effectArray=_effectArray;
@property(retain, nonatomic) YXVideoEffect *videoEffect; // @synthesize videoEffect=_videoEffect;
@property(retain, nonatomic) YXVideoSuperPlayer *yxPlayer; // @synthesize yxPlayer=_yxPlayer;
@property(retain, nonatomic) NSString *syncFileForCompostion; // @synthesize syncFileForCompostion=_syncFileForCompostion;
@property(nonatomic) double soundMixIntensity; // @synthesize soundMixIntensity=_soundMixIntensity;
@property(retain, nonatomic) NSString *userAppointBundleName; // @synthesize userAppointBundleName=_userAppointBundleName;
@property(retain, nonatomic) CALayer *animatedLayer; // @synthesize animatedLayer=_animatedLayer;
@property(nonatomic) _Bool donotFadeOut; // @synthesize donotFadeOut=_donotFadeOut;
@property(nonatomic) _Bool useLowBitRate; // @synthesize useLowBitRate=_useLowBitRate;
@property(nonatomic) _Bool isFliped; // @synthesize isFliped=_isFliped;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) id <YXVideoKitEnginePlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *currentMusicPath; // @synthesize currentMusicPath=_currentMusicPath;
@property(retain, nonatomic) YXVideoEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)relinkDisplayView;
@property(readonly, nonatomic) AVAsset *usedAsset;
- (void)updateBGMPlayerItem:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)buildHeadsetListener;
- (void)updateDisplayView:(id)arg1;
@property(readonly, nonatomic) double currentPlayingTime;
- (void)dealloc;
- (void)willResignActive;
- (id)getFileFromSDKBundle:(id)arg1;
- (_Bool)isDeviceLowModel;
- (id)buildError:(id)arg1 code:(int)arg2;
- (id)rebuildLayerForExport;
- (void)exportVideoWithLayer:(id)arg1 videoPath:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)exportVideoWithEffect:(id)arg1 videoPath:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveVideoToPath:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getCurrentComposition;
- (CDStruct_1b6d18a9)getCurrentDuration;
- (void)updateRotation:(long long)arg1;
- (void)updateFlip:(_Bool)arg1;
- (void)updateTimeRangeAt:(long long)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)updateCustomTimeRangeDictionaries:(id)arg1;
- (void)updateTransformAt:(long long)arg1 withTransformString:(id)arg2;
- (void)updateCustomTransformStrings:(id)arg1;
- (void)applyPlay:(_Bool)arg1;
- (void)apply;
- (void)applyPlay;
- (void)applyNormalPlay:(_Bool)arg1;
- (void)applyNormal;
- (void)applyNormalPlay;
- (void)applyMusic:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)applyEffect:(id)arg1 withBeginBlock:(CDUnknownBlockType)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
- (void)insertClipAt:(long long)arg1 withClipPath:(id)arg2;
- (void)appendVideoComponents:(id)arg1;
- (void)duplicateClipAt:(long long)arg1;
- (void)exchangeClipAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)replaceAt:(long long)arg1 withComponent:(id)arg2;
- (void)removeClipAt:(long long)arg1;
- (void)removeAllClips;
- (id)clips;
- (id)getFullTimeRangePlayerItem;
- (void)updateWithAnimatedLayer:(id)arg1 andPlay:(_Bool)arg2;
- (void)updateWithAnimatedLayer:(id)arg1;
- (void)hideImageForVideo;
- (void)seekToSecond:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)clean;
- (void)pause;
- (void)resume;
- (_Bool)loadEditorAndPlay:(_Bool)arg1;
- (_Bool)loadEditorAndPlay;
- (void)disableLogoValidation;
- (void)validateAuthority;
- (void)secrectlyDisableValidation;
- (void)updatePlayerFrame:(struct CGRect)arg1;
- (void)YXVideoSuperPlayerProgress:(double)arg1;
- (void)YXVideoSuperPlayerDoPause:(id)arg1;
- (void)YXVideoSuperPlayerDoPlay:(id)arg1;
- (void)initPlayerWithView:(id)arg1;
- (void)setLocationInfo:(id)arg1 temperature:(long long)arg2 info:(id)arg3;
- (void)setVideoNickName:(id)arg1;
- (void)updateEngineVolume:(double)arg1;
- (void)checkTransition;
- (void)updateTransitionEffect:(id)arg1;
- (void)initEditorWithComponents:(id)arg1;
- (void)initEditorWithClips:(id)arg1;
- (void)useOriginalVideoSize;
- (void)updateMFConfig:(id)arg1;
- (id)initWithMutipleFrameConfig:(id)arg1 clipsPaths:(id)arg2 withView:(id)arg3 useEffect:(_Bool)arg4;
- (id)initSecrectlyWithComponents:(id)arg1 withView:(id)arg2 useEffect:(_Bool)arg3;
- (id)initSecrectlyWithClips:(id)arg1 withView:(id)arg2 useEffect:(_Bool)arg3;
- (id)initWithComponents:(id)arg1 withView:(id)arg2;
- (id)initWithComponents:(id)arg1 withView:(id)arg2 useEffect:(_Bool)arg3;
- (id)initWithClips:(id)arg1 withView:(id)arg2;
- (id)initWithClips:(id)arg1 withView:(id)arg2 useEffect:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

