/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;
@interface BWFileSinkNode : BWSinkNode {

	id<BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;

}

@property (assign,nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;              //@synthesize recordingStatusDelegate=_recordingStatusDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFileSize; 
@property (nonatomic,readonly) SCD_Struct_BW2 lastFileDuration; 
-(id)init;
-(id<BWNodeFileWriterStatusDelegate>)recordingStatusDelegate;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)setRecordingStatusDelegate:(id<BWNodeFileWriterStatusDelegate>)arg1 ;
@end

