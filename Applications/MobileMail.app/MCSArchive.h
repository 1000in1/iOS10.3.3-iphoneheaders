/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMessageOperation.h>

@class MCSMessageOperation;

@interface MCSArchive : MCSMessageOperation {

	MCSMessageOperation* _seenOrTransferOperation;
	MCSMessageOperation* _deleteOperation;
	char _isDeleteInPlace;

}
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(char)willMarkRead;
-(char)willMarkUnread;
-(char)willUnflag;
-(char)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(char)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)isRevertibleWithMessages:(id)arg1 ;
-(void)_fetchRemoteIdForMessages:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
@end

