/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REExportedValue.h>

@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {

	NSDictionary* _dictionary;

}
-(id)dictionaryValue;
-(unsigned long long)type;
-(unsigned long long)propertyCount;
-(id)initWithDictionary:(id)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end
