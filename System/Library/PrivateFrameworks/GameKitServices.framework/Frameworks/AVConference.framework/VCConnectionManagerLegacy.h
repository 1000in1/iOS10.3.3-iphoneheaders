/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@protocol VCConnectionProtocol;
@class NSMutableArray;

@interface VCConnectionManagerLegacy : VCConnectionManager {

	id<VCConnectionProtocol> _pendingPrimaryConnection;
	id<VCConnectionProtocol> _pendingSecondaryConnection;
	NSMutableArray* _validConnections;

}

@property (nonatomic,retain) id<VCConnectionProtocol> pendingPrimaryConnection;                //@synthesize pendingPrimaryConnection=_pendingPrimaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> pendingSecondaryConnection;              //@synthesize pendingSecondaryConnection=_pendingSecondaryConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(long)shouldNominateCandidatePairInternal:(tagCANDIDATEPAIR*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
-(char)shouldNominateConnection:(id)arg1 ;
-(long)nominateConnection:(id)arg1 asPrimary:(char)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
-(id)getPrimaryConnectionToBeCompared;
-(id<VCConnectionProtocol>)pendingPrimaryConnection;
-(id<VCConnectionProtocol>)pendingSecondaryConnection;
-(void)setPendingPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)setPendingSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(char)arg2 ;
-(long)removeConnectionWithIPPort:(tagIPPORT*)arg1 isLocalInterface:(char)arg2 ;
-(long)removeConnectionWithIPPortInternal:(tagIPPORT*)arg1 isLocalInterface:(char)arg2 ;
-(long)updateStateWithCurrentConnection:(id)arg1 asPrimary:(char)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 replaceOnly:(int*)arg5 ;
-(id)getSecondaryConnectionToBeCompared;
-(long)shouldNominateCandidatePair:(tagCANDIDATEPAIR*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(char)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(char*)arg2 isSourceIPv6:(char*)arg3 ;
-(char)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)getConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(char*)arg2 ;
-(long)removeConnection:(id)arg1 ;
-(long)addConnection:(id)arg1 ;
@end

