/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol REHistoricSectionDescriptorProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL invertsRanking; 
@property (nonatomic,readonly) long long maxElementCount; 
@property (nonatomic,readonly) NSSet * rules; 
@required
-(NSSet *)rules;
-(NSString *)name;
-(long long)maxElementCount;
-(BOOL)invertsRanking;

@end
