/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APPCPromotableTapAction.h>

@interface APPCTapAction : NSObject <APPCPromotableTapAction> {

	 actionType;

}

@property (readonly,nonatomic) long long actionType; 
+(id)actionFor:(id)arg1 ;
-(id)init;
-(void)performActionWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithActionType:(long long)arg1 ;
-(long long)actionType;
@end
