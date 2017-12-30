/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconModelStore <NSObject>
@required
-(id)loadDesiredIconState:(id*)arg1;
-(id)loadCurrentIconState:(id*)arg1;
-(char)deleteDesiredIconState:(id*)arg1;
-(char)deleteCurrentIconState:(id*)arg1;
-(char)saveDesiredIconState:(id)arg1 error:(id*)arg2;
-(char)saveCurrentIconState:(id)arg1 error:(id*)arg2;

@end

