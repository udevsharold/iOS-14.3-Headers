/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECRawMessageHeader : NSObject {

	NSString* _name;
	NSString* _transmittedName;
	NSString* _body;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * transmittedName;              //@synthesize transmittedName=_transmittedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                         //@synthesize body=_body - In the implementation block
-(NSString *)body;
-(id)description;
-(NSString *)name;
-(NSString *)transmittedName;
-(id)initWithHeaderFieldName:(id)arg1 body:(id)arg2 ;
@end
