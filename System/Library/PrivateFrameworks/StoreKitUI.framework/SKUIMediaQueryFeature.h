/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SKUIMediaQueryFeature : NSObject {

	NSString* _featureName;

}

@property (nonatomic,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSArray * notificationNames; 
@property (nonatomic,readonly) NSArray * requiredKeys; 
+(BOOL)supportsFeatureName:(id)arg1 ;
-(NSArray *)notificationNames;
-(NSArray *)requiredKeys;
-(NSString *)featureName;
-(id)initWithFeatureName:(id)arg1 value:(id)arg2 ;
-(BOOL)evaluateWithValues:(id)arg1 ;
@end
