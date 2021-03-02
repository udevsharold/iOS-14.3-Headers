/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)clearDistributionKey:(id)arg1 ;
-(BOOL)isEnabled;
-(void)incrementKey:(id)arg1 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)decrementKey:(id)arg1 ;
-(int)commit;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
-(void)significantTimeChanged;
@end
