//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonServerNotifyTask.h"

@protocol EmoticonRestartBackupWhenDeleteTaskDelegate;

__attribute__((visibility("hidden")))
@interface EmoticonRestartBackupWhenDeleteTask : EmoticonServerNotifyTask
{
    id <EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate;
}

@property(nonatomic) __weak id <EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)resumeLogic;
- (id)initWithDelegate:(id)arg1;

@end
