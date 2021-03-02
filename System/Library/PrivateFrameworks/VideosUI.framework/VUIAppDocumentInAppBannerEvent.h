/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSString* _targetId;

}

@property (nonatomic,copy) NSString * targetId;              //@synthesize targetId=_targetId - In the implementation block
-(id)initWithDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)targetId;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTargetId:(NSString *)arg1 ;
-(id)initWithTargetId:(id)arg1 ;
@end
