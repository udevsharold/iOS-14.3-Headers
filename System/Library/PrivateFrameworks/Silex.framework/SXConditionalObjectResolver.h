/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXConditionValidating;
@class SXJSONObjectMerger;

@interface SXConditionalObjectResolver : NSObject {

	SXJSONObjectMerger* _objectMerger;
	id<SXConditionValidating> _conditionValidator;

}

@property (nonatomic,readonly) id<SXConditionValidating> conditionValidator;              //@synthesize conditionValidator=_conditionValidator - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * objectMerger;                         //@synthesize objectMerger=_objectMerger - In the implementation block
-(SXJSONObjectMerger *)objectMerger;
-(id<SXConditionValidating>)conditionValidator;
-(id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2 ;
-(id)resolveObjects:(id)arg1 context:(id)arg2 ;
@end
