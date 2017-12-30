/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@class NSMutableArray;

@interface VCConnectionManagerIDS : VCConnectionManager {

	NSMutableArray* _connectionArray;
	unsigned _lastTimestampForRemoteSendingFromNonPrimary;
	unsigned _lastTimestampPreferredRemoteInterfaceUpdated;

}
-(id)init;
-(void)dealloc;
-(id)getPrimaryConnectionToBeCompared;
-(void)reportConnection:(id)arg1 isInitialConnection:(char)arg2 ;
-(id)getSecondaryConnectionToBeCompared;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(char)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(char*)arg2 isSourceIPv6:(char*)arg3 ;
-(char)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)getConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(char*)arg2 ;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(char)addConnectionToConnectionArray:(id)arg1 ;
-(void)updatePrimaryWithConnection:(id)arg1 ;
-(void)updateSecondaryWithConnection:(id)arg1 ;
-(void)updateConnectionForDuplication;
-(void)handleSecondaryConnectionRemoved;
-(void)handlePrimaryConnectionRemoved;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(char)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2 ;
-(long)removeConnection:(id)arg1 ;
-(long)addConnection:(id)arg1 ;
@end

