/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, INCodableEnumAttribute, NSDictionary;

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INCodableEnumAttribute* _enumAttribute;
	NSDictionary* _enumNamesToKeys;
	NSDictionary* _keysToEnumNames;
	NSDictionary* _enumNamesToLabels;

}

@property (nonatomic,readonly) NSArray * possibleStates;                            //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) INCodableEnumAttribute * enumAttribute;              //@synthesize enumAttribute=_enumAttribute - In the implementation block
@property (nonatomic,readonly) NSDictionary * enumNamesToKeys;                      //@synthesize enumNamesToKeys=_enumNamesToKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * keysToEnumNames;                      //@synthesize keysToEnumNames=_keysToEnumNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * enumNamesToLabels;                    //@synthesize enumNamesToLabels=_enumNamesToLabels - In the implementation block
-(NSArray *)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(INCodableEnumAttribute *)enumAttribute;
-(NSDictionary *)enumNamesToKeys;
-(NSDictionary *)keysToEnumNames;
-(NSDictionary *)enumNamesToLabels;
@end

