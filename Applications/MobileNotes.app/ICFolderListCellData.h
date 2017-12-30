/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface ICFolderListCellData : NSObject {

	NSString* _folderTitle;
	NSNumber* _noteCount;

}

@property (nonatomic,copy) NSString * folderTitle;              //@synthesize folderTitle=_folderTitle - In the implementation block
@property (nonatomic,retain) NSNumber * noteCount;              //@synthesize noteCount=_noteCount - In the implementation block
-(void)setFolderTitle:(NSString *)arg1 ;
-(void)setNoteCount:(NSNumber *)arg1 ;
-(void)populateDataFromNoteContainer:(id)arg1 ;
-(void)populateDataFromNoteCollection:(id)arg1 inNoteContext:(id)arg2 ;
-(NSString *)folderTitle;
-(NSNumber *)noteCount;
@end

