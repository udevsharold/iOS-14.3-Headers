/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol INUICKPInterfaceSectionModeling <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long interactiveBehavior; 
@property (nonatomic,copy) NSSet * parameters; 
@property (nonatomic,readonly) BOOL isWildCardSection; 
@required
-(void)setParameters:(id)arg1;
-(NSSet *)parameters;
-(unsigned long long)interactiveBehavior;
-(BOOL)isWildCardSection;

@end
