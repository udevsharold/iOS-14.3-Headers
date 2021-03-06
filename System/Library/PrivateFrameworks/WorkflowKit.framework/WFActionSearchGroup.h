/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFActionSearchGroup : NSObject {

	NSString* _identifier;
	NSString* _localizedName;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                     //@synthesize actions=_actions - In the implementation block
-(NSArray *)actions;
-(NSString *)identifier;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3 ;
@end

