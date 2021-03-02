/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFControlItem.h>

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem {

	NSString* _characteristicType;

}

@property (nonatomic,copy,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
+(Class)valueClass;
+(id)defaultMainTextColorForCharacteristicType:(id)arg1 ;
-(NSString *)characteristicType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(void)getStatus:(out id*)arg1 mainTextColor:(out id*)arg2 supplementaryDescription:(out id*)arg3 withBatchReadResponse:(id)arg4 ;
@end
