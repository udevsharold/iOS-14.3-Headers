/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWFormat.h>

@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {

	NSArray* _metadataIdentifiers;

}
+(void)initialize;
+(id)formatWithMetadataIdentifiers:(id)arg1 ;
-(unsigned)mediaType;
-(void)dealloc;
-(id)_initWithMetadataIdentifiers:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
@end

