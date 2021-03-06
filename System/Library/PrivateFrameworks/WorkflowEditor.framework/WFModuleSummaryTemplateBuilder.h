/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFModuleSummaryTemplateBuilder : NSObject {

	NSString* _formatString;
	NSArray* _formatItems;
	NSArray* _parameterKeys;

}

@property (nonatomic,retain) NSArray * formatItems;                       //@synthesize formatItems=_formatItems - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeys;                       //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatString;              //@synthesize formatString=_formatString - In the implementation block
+(id)slotsForMultipleParameterState:(id)arg1 inParameter:(id)arg2 ;
+(BOOL)formatString:(id)arg1 containsParameterKey:(id)arg2 ;
-(NSString *)formatString;
-(NSArray *)parameterKeys;
-(void)setParameterKeys:(NSArray *)arg1 ;
-(id)initWithFormatString:(id)arg1 ;
-(id)buildContentWithParameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 variableBeingEdited:(id)arg4 ;
-(void)itemizeFormatStringIfNeeded;
-(id)contentByEnumeratingSummaryWithParameterSlotBuilder:(/*^block*/id)arg1 ;
-(NSArray *)formatItems;
-(void)setFormatItems:(NSArray *)arg1 ;
@end

