/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSData * objectData; 
@property (nonatomic,readonly) SCD_Struct_CS10 referenceOriginTransformation; 
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(SCD_Struct_CS10)referenceOriginTransformation;
-(NSData *)objectData;
-(id)description;
-(long long)version;
@end

