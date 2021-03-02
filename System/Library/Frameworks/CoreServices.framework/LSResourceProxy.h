/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _LSBoundIconInfo, NSDictionary;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {

	NSString* _localizedName;
	_LSBoundIconInfo* __boundIconInfo;

}

@property (setter=_setLocalizedName:,nonatomic,copy) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (setter=_setBoundIconInfo:,nonatomic,retain) _LSBoundIconInfo * _boundIconInfo;              //@synthesize _boundIconInfo=__boundIconInfo - In the implementation block
@property (nonatomic,readonly) id<LSIconResourceLocator> iconResourceLocator; 
@property (nonatomic,readonly) BOOL boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
@property (nonatomic,readonly) NSString * primaryIconName; 
@property (assign,nonatomic) unsigned long long propertyListCachingStrategy; 
+(BOOL)supportsSecureCoding;
-(_LSBoundIconInfo *)_boundIconInfo;
-(NSString *)primaryIconName;
-(id<LSIconResourceLocator>)iconResourceLocator;
-(BOOL)boundIconIsBadge;
-(void)_setLocalizedName:(id)arg1 ;
-(void)_setBoundIconInfo:(id)arg1 ;
-(id)iconDataForVariant:(int)arg1 ;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)_privateDocumentFileNamesAsCacheKey;
-(id)_initWithLocalizedName:(id)arg1 ;
-(unsigned long long)propertyListCachingStrategy;
-(void)setPropertyListCachingStrategy:(unsigned long long)arg1 ;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(NSDictionary *)iconsDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
@end
