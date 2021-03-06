/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSL2FeatureVectorProcessingContext : NSObject {

	unsigned short* _expandedFeatureExecutionOrder;
	unsigned long long _expandedFeatureCount;

}

@property (assign,nonatomic) unsigned short* expandedFeatureExecutionOrder;              //@synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder - In the implementation block
@property (assign,nonatomic) unsigned long long expandedFeatureCount;                    //@synthesize expandedFeatureCount=_expandedFeatureCount - In the implementation block
-(void)dealloc;
-(void)setExpandedFeatureCount:(unsigned long long)arg1 ;
-(void)setExpandedFeatureExecutionOrder:(unsigned short*)arg1 ;
-(unsigned short*)expandedFeatureExecutionOrder;
-(id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3 ;
-(unsigned long long)expandedFeatureCount;
@end

