/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	unsigned long long _id_number;
	DecisionDetails* _details;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(void)serializeToXPCObject:(id)arg1 ;
-(void)setId_number:(unsigned long long)arg1 ;
-(void)setDetails:(DecisionDetails *)arg1 ;
-(id)description;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(unsigned long long)id_number;
-(DecisionDetails *)details;
@end

