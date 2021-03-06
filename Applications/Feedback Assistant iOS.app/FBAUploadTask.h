/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSURL, NSError, FBAFormResponse, FBAFeedbackFollowup;

@interface FBAUploadTask : NSManagedObject

@property (retain) NSNumber * primitiveTaskState; 
@property (retain) NSNumber * primitiveLocalSubmissionStage; 
@property (assign) unsigned localSubmissionStage; 
@property (retain) NSNumber * taskIdentifier; 
@property (retain) NSURL * fileURL; 
@property (retain) NSNumber * bytesToUpload; 
@property (retain) NSNumber * bytesUploaded; 
@property (assign) int taskState; 
@property (retain) NSError * lastError; 
@property (retain) FBAFormResponse * formResponse; 
@property (retain) FBAFeedbackFollowup * feedbackFollowup; 
+(id)entityName;
-(id)formID;
-(unsigned)localSubmissionStage;
-(void)setLocalSubmissionStage:(unsigned)arg1 ;
-(id)filerForm;
-(int)taskState;
-(void)setTaskState:(int)arg1 ;
@end

