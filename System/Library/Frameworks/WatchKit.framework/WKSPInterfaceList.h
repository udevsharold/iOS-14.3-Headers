/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WKSPInterfaceObject.h>

@class NSArray, NSDictionary, WKInterfaceController;

@interface WKSPInterfaceList : WKSPInterfaceObject {

	NSArray* _rowControllers;
	NSDictionary* _rowDescriptions;
	WKInterfaceController* _controller;
	NSArray* _rowControllerProperties;

}

@property (nonatomic,copy) NSArray * rowControllers;                                 //@synthesize rowControllers=_rowControllers - In the implementation block
@property (nonatomic,copy) NSDictionary * rowDescriptions;                           //@synthesize rowDescriptions=_rowDescriptions - In the implementation block
@property (assign,nonatomic,__weak) WKInterfaceController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSArray * rowControllerProperties;                      //@synthesize rowControllerProperties=_rowControllerProperties - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
-(WKInterfaceController *)controller;
-(long long)numberOfRows;
-(void)setController:(WKInterfaceController *)arg1 ;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(id)rowControllerAtIndex:(long long)arg1 ;
-(void)setRowDescriptions:(NSDictionary *)arg1 ;
-(void)setRowTypes:(id)arg1 ;
-(NSDictionary *)rowDescriptions;
-(void)setRowControllers:(NSArray *)arg1 ;
-(void)setRowControllerProperties:(NSArray *)arg1 ;
-(NSArray *)rowControllers;
-(void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2 ;
-(NSArray *)rowControllerProperties;
@end

