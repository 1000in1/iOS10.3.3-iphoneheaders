/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserFS/UserFSItem.h>

@interface UserFSFolder : UserFSItem
-(char)isDirectory;
-(id)_pathForChildNamed:(id)arg1 ;
-(char)enumerateChildrenAndReturnError:(id*)arg1 callback:(/*^block*/id)arg2 ;
-(char)deleteChildNamed:(id)arg1 error:(id*)arg2 ;
-(id)childNamed:(id)arg1 error:(id*)arg2 ;
@end

