/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, MFSparseMutable64IndexSet, CRRecentContactsLibrary;

@interface _MessageAddressScannerQueue : MFBufferedQueue {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	MFSparseMutable64IndexSet* _hashes;
	CRRecentContactsLibrary* _recentsLibrary;

}

@property (nonatomic,retain) CRRecentContactsLibrary * recentsLibrary;              //@synthesize recentsLibrary=_recentsLibrary - In the implementation block
-(char)handleHashes:(id)arg1 ;
-(CRRecentContactsLibrary *)recentsLibrary;
-(char)addHash:(long long)arg1 ;
-(void)setRecentsLibrary:(CRRecentContactsLibrary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(char)isEmpty;
-(void)setTargetQueue:(id)arg1 ;
-(char)_flush;
@end

