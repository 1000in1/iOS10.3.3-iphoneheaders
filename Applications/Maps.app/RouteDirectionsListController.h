/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITableView, Route;


@protocol RouteDirectionsListController <NSObject>
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,retain) Route * route; 
@required
-(UITableView *)tableView;
-(Route *)route;
-(void)setRoute:(id)arg1;

@end

