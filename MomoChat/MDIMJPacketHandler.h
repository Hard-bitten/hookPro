//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ClientConnectionDelegate.h"
#import "IMJClientDelegate.h"
#import "IMJMessageManagerDelegate.h"

@class IMJBizClient, MDApiPacketBuilder, MDGetPacketBuilder, MDGetPacketReceiver, MDMessagePacketBuilder, MDMessagePacketReceiver, MDSetPacketBuilder, MDSetPacketReceiver, MDVideoChatPacketHandler, NSHashTable, NSString;

@interface MDIMJPacketHandler : NSObject <IMJMessageManagerDelegate, ClientConnectionDelegate, IMJClientDelegate>
{
    IMJBizClient *_imjClient;
    MDMessagePacketReceiver *_msgPacketReceiver;
    MDSetPacketReceiver *_setPacketReceiver;
    MDVideoChatPacketHandler *_videoChatHandler;
    MDGetPacketBuilder *_getPacketBuilder;
    MDSetPacketBuilder *_setPacketBuilder;
    MDApiPacketBuilder *_apiPacketBuilder;
    MDMessagePacketBuilder *_msgPacketBuilder;
    MDGetPacketReceiver *_getPacketReceiver;
    NSHashTable *_msgDelegateTable;
    NSHashTable *_connectionDelegateTable;
}

+ (unsigned long long)messageCategoryForString:(id)arg1;
@property(retain, nonatomic) NSHashTable *connectionDelegateTable; // @synthesize connectionDelegateTable=_connectionDelegateTable;
@property(retain, nonatomic) NSHashTable *msgDelegateTable; // @synthesize msgDelegateTable=_msgDelegateTable;
@property(retain, nonatomic) MDGetPacketReceiver *getPacketReceiver; // @synthesize getPacketReceiver=_getPacketReceiver;
@property(retain, nonatomic) MDMessagePacketBuilder *msgPacketBuilder; // @synthesize msgPacketBuilder=_msgPacketBuilder;
@property(retain, nonatomic) MDApiPacketBuilder *apiPacketBuilder; // @synthesize apiPacketBuilder=_apiPacketBuilder;
@property(retain, nonatomic) MDSetPacketBuilder *setPacketBuilder; // @synthesize setPacketBuilder=_setPacketBuilder;
@property(retain, nonatomic) MDGetPacketBuilder *getPacketBuilder; // @synthesize getPacketBuilder=_getPacketBuilder;
@property(retain, nonatomic) MDVideoChatPacketHandler *videoChatHandler; // @synthesize videoChatHandler=_videoChatHandler;
@property(retain, nonatomic) MDSetPacketReceiver *setPacketReceiver; // @synthesize setPacketReceiver=_setPacketReceiver;
@property(retain, nonatomic) MDMessagePacketReceiver *msgPacketReceiver; // @synthesize msgPacketReceiver=_msgPacketReceiver;
@property(retain, nonatomic) IMJBizClient *imjClient; // @synthesize imjClient=_imjClient;
- (void)playSoundAndVibrate;
- (void)addObserverTarget:(id)arg1 handleSelector:(SEL)arg2 filter:(id)arg3;
- (void)enumerateConnectionDelegateWithSel:(SEL)arg1 clientObj:(id)arg2;
- (void)enumerateNotifyDelegateWithSel:(SEL)arg1 para1:(id)arg2 para2:(id)arg3;
- (void)enumerateNotifyDelegateWithSel:(SEL)arg1 packet:(id)arg2;
- (void)removeDelegateForClientMessage:(id)arg1;
- (void)removeDelegateForClientConnection:(id)arg1;
- (void)addDelegateForClientMessage:(id)arg1;
- (void)addDelegateForClientConnection:(id)arg1;
- (id)msgDelegateEnumerator;
- (id)connetionDelegateEnumerator;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (void)imjClient:(id)arg1 stateChanged:(int)arg2 error:(id)arg3;
- (void)imjClientCloseByServer:(id)arg1 ec:(long long)arg2 em:(id)arg3;
- (void)imjClientDidOffline:(id)arg1;
- (void)imjClientWillOffline:(id)arg1;
- (void)imjClientDidOnline:(id)arg1;
- (void)imjClientWillOnline:(id)arg1;
- (void)imjClientDidNotAuth:(id)arg1 ec:(long long)arg2 em:(id)arg3;
- (void)imjClientDidAuth:(id)arg1;
- (void)imjClientWillAuth:(id)arg1;
- (void)didFailMsgSyn:(id)arg1 error:(id)arg2;
- (void)didFinishMsgSyn:(id)arg1;
- (void)willSendMsgSynPacket:(id)arg1;
- (void)didRecvMsgAckPacket:(id)arg1;
- (void)didFailSendMsg:(id)arg1 error:(id)arg2;
- (void)didRecvSentPacket:(id)arg1 responsePacket:(id)arg2;
- (void)didFinishSendReadMsgstOfID:(id)arg1;
- (void)onlineBeginSendAllReadStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

