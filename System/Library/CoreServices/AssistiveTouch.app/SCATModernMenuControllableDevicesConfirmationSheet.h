/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuSheet.h>

@protocol SCATModernMenuControllableDevicesConfirmationSheetDelegate;
@class AXSSInterDeviceSearchResult;

@interface SCATModernMenuControllableDevicesConfirmationSheet : SCATModernMenuSheet {

	char _isPoppingToPreviousViewController;
	id<SCATModernMenuControllableDevicesConfirmationSheetDelegate> _delegate;
	AXSSInterDeviceSearchResult* _searchResult;

}

@property (assign,nonatomic) char isPoppingToPreviousViewController;                                               //@synthesize isPoppingToPreviousViewController=_isPoppingToPreviousViewController - In the implementation block
@property (assign,nonatomic) id<SCATModernMenuControllableDevicesConfirmationSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AXSSInterDeviceSearchResult * searchResult;                                         //@synthesize searchResult=_searchResult - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(char)shouldKeepScannerAwake;
-(id)initWithMenu:(id)arg1 interDeviceSearchResult:(id)arg2 ;
-(void)viewControllerViewWillDisappear:(char)arg1 ;
-(void)setIsPoppingToPreviousViewController:(char)arg1 ;
-(char)isPoppingToPreviousViewController;
-(void)setDelegate:(id<SCATModernMenuControllableDevicesConfirmationSheetDelegate>)arg1 ;
-(id<SCATModernMenuControllableDevicesConfirmationSheetDelegate>)delegate;
-(AXSSInterDeviceSearchResult *)searchResult;
@end

