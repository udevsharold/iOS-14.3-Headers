/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageCriterionConverterDelegate <NSObject>
@optional
-(id)mailAccountForIdentifier:(id)arg1;
-(long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2;
-(id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2;
-(unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3;
-(id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3;

@end

