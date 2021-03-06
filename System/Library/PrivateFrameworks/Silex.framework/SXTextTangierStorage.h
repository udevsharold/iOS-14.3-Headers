/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPStorage.h>

@class NSLocale, NSSet, NSMutableArray, NSCache;

@interface SXTextTangierStorage : TSWPStorage {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	os_unfair_lock_s _unfairLock;
	NSLocale* _locale;
	NSSet* _rangedExclusionPaths;
	NSMutableArray* _attachments;
	NSCache* _tokenizersCache;

}

@property (nonatomic,retain) NSMutableArray * attachments;               //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSCache * tokenizersCache;                  //@synthesize tokenizersCache=_tokenizersCache - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                          //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                       //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,retain) NSSet * rangedExclusionPaths;               //@synthesize rangedExclusionPaths=_rangedExclusionPaths - In the implementation block
-(NSLocale *)locale;
-(os_unfair_lock_s)unfairLock;
-(BOOL)isSelectable;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)setIsSelectable:(BOOL)arg1 ;
-(BOOL)supportsSections;
-(id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5 ;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(NSSet *)rangedExclusionPaths;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(NSCache *)tokenizersCache;
-(void)setTokenizersCache:(NSCache *)arg1 ;
-(void)setRangedExclusionPaths:(NSSet *)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(BOOL)shouldHyphenate;
@end

