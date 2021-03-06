/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider {

	NSDate* _date;
	long long _style;
	unsigned long long _units;

}

@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long units;              //@synthesize units=_units - In the implementation block
+(id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(unsigned long long)units;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(long long)style;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end

