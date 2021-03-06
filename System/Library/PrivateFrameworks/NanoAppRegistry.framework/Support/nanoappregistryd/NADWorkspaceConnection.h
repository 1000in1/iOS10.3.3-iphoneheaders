/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NARWorkspaceService.h>

@class NADApplicationStore, NSString;

@interface NADWorkspaceConnection : NSObject <NARWorkspaceService> {

	NADApplicationStore* _applicationStore;

}

@property (nonatomic,readonly) NADApplicationStore * applicationStore;              //@synthesize applicationStore=_applicationStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithApplicationStore:(id)arg1 ;
-(NADApplicationStore *)applicationStore;
-(oneway void)getWorkspaceInfoWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)getWorkspaceInfoIncludingHiddenApps:(char)arg1 completion:(/*^block*/id)arg2 ;
@end

