/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependency.h>

@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(char)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
-(id)taskDependencyDescription;
-(void)setTaskDependencyDescription:(id)arg1 ;
-(id)parentTask;
-(id)mainDocumentTask;
-(id)init;
-(void)dealloc;
@end

