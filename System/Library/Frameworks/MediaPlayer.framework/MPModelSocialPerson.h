/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic,copy) NSString * uncensoredName; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) NSString * biography; 
@property (assign,getter=isPrivate,nonatomic) BOOL privatePerson; 
@property (assign,getter=isVerified,nonatomic) BOOL verified; 
@property (assign,nonatomic) long long pendingRequestsCount; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__pendingRequestsCount_KEY;
+(id)__verified_KEY;
+(id)__handle_KEY;
+(id)__uncensoredName_KEY;
+(id)__privatePerson_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__biography_KEY;
+(id)kind;
-(id)artworkCatalog;
@end
