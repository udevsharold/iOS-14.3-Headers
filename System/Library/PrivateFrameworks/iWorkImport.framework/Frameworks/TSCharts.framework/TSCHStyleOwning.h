/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)model;
-(id)style;
-(id)defaultProperties;
-(id)valueForProperty:(int)arg1;
-(id)context;
-(id)chartInfo;
-(int)defaultPropertyForGeneric:(int)arg1;
-(int)specificPropertyForGeneric:(int)arg1;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)operationPropertyNameFromGenericProperty:(int)arg1;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;

@end
