/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSSPropertySource.h>

@class TSDModifyPrototypeChange, NSString;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {

	TSDModifyPrototypeChange* mChange;
	BOOL mAfterChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(id)initWithPrototypeChange:(id)arg1 afterChange:(BOOL)arg2 ;
-(id)p_propertyMap;
@end

