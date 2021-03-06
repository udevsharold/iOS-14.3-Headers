/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPAlertDelegate.h>

@protocol CPAlertDelegate;
@class NSString, NSArray;

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate> {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;
	id<CPAlertDelegate> _alertDelegate;

}

@property (nonatomic,retain) id<CPAlertDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)message;
-(NSArray *)actions;
-(id)initWithCoder:(id)arg1 ;
-(id<CPAlertDelegate>)alertDelegate;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)setAlertDelegate:(id<CPAlertDelegate>)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(void)handleAlertActionForIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
@end

