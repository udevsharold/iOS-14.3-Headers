/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXFontAttributes : NSObject <SXFontAttributes> {

	NSString* _familyName;
	long long _weight;
	long long _width;
	long long _style;

}

@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)width;
-(NSString *)familyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)weight;
-(id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4 ;
-(id)stringForWeight:(long long)arg1 ;
-(id)stringForWidth:(long long)arg1 ;
-(id)stringForStyle:(long long)arg1 ;
@end

