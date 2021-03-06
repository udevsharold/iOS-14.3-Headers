/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter {

	BOOL _allowsAllLists;
	id _defaultSerializedListRepresentation;
	NSArray* _listStates;

}

@property (nonatomic,retain) id defaultSerializedListRepresentation;              //@synthesize defaultSerializedListRepresentation=_defaultSerializedListRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * listStates;                                //@synthesize listStates=_listStates - In the implementation block
@property (nonatomic,readonly) BOOL allowsAllLists;                               //@synthesize allowsAllLists=_allowsAllLists - In the implementation block
-(id)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)reloadStates;
-(BOOL)allowsAllLists;
-(id)defaultSerializedListRepresentation;
-(void)setDefaultSerializedListRepresentation:(id)arg1 ;
-(NSArray *)listStates;
-(void)setListStates:(NSArray *)arg1 ;
@end

