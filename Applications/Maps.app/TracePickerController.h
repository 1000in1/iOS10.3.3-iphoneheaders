/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>

@class NSArray, NSString;

@interface TracePickerController : AuxiliaryDebugViewController {

	NSArray* _myFileSheetTrackPickerOptions;
	NSArray* _myFiles;
	NSString* _selectedTracePath;
	NSString* _selectedTraceName;
	NSString* _selectedTraceFileName;
	int _type;
	/*^block*/id _confirmHandler;

}

@property (nonatomic,retain) NSArray * myFiles;                                    //@synthesize myFiles=_myFiles - In the implementation block
@property (nonatomic,retain) NSArray * myFileSheetTracePickerOptions;              //@synthesize myFileSheetTrackPickerOptions=_myFileSheetTrackPickerOptions - In the implementation block
@property (nonatomic,retain) NSString * selectedTracePath;                         //@synthesize selectedTracePath=_selectedTracePath - In the implementation block
@property (nonatomic,retain) NSString * selectedTraceName;                         //@synthesize selectedTraceName=_selectedTraceName - In the implementation block
@property (nonatomic,retain) NSString * selectedTraceFileName;                     //@synthesize selectedTraceFileName=_selectedTraceFileName - In the implementation block
+(id)navigationDestinationTitle;
-(id)initWithTraceType:(int)arg1 ConfirmHandler:(/*^block*/id)arg2 ;
-(void)reloadTraces;
-(void)updateTracePickerOptions;
-(id)tracePathForRow:(unsigned)arg1 ;
-(id)selectedTracePaths;
-(id)tracePickerOptionsForTableView:(id)arg1 indexPath:(id)arg2 ;
-(NSArray *)myFileSheetTracePickerOptions;
-(void)setMyFileSheetTracePickerOptions:(NSArray *)arg1 ;
-(NSArray *)myFiles;
-(void)setMyFiles:(NSArray *)arg1 ;
-(NSString *)selectedTracePath;
-(void)setSelectedTracePath:(NSString *)arg1 ;
-(NSString *)selectedTraceName;
-(void)setSelectedTraceName:(NSString *)arg1 ;
-(NSString *)selectedTraceFileName;
-(void)setSelectedTraceFileName:(NSString *)arg1 ;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

